const http = require('http');
const fs = require('fs')
const cors = require('cors');

const PORT = 80

try {
  fs.readFile("./index.html", function(error,html){
    if(error) throw error
    http.createServer(function(request,response){
      response.setHeader('Access-Control-Allow-Origin', '*');
      response.setHeader('Access-Control-Request-Method', '*');
      response.setHeader('Access-Control-Allow-Methods', 'OPTIONS, GET');
      response.setHeader('Access-Control-Allow-Headers', '*');
      response.setHeader("Content-Type","text/html")
        response.writeHead(200)
        response.write(html);
        response.end();
    }).listen(PORT);
  })
} catch (e){
  /* handle error */
  console.log(e)
}
