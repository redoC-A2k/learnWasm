use std::env;

fn main() {
  println!("hello user");
  for argument in env::args().skip(1) {
    println!("argument {}", argument);
  }
}
