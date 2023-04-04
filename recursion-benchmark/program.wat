(module
    (func $fib (param $n i32) (result i32)             ;; nth
        (i32.or                                        ;; n == 0 || n == 1
            (i32.eqz (local.get $n))
            (i32.eq (local.get $n) (i32.const 1))
        )

        if (result i32)
            (return (local.get $n))
        else
            ;; return fib(n - 1) + fib(n - 2)
            (return (i32.add
                (call $fib (i32.sub (local.get $n) (i32.const 1)))
                (call $fib (i32.sub (local.get $n) (i32.const 2)))
            ))
        end
    )
    (export "fib" (func $fib))
)
