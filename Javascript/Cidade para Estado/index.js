const cidadeEstado = require("cidades-estados-brasil-json");

var cidade="ribeirão preto"
var estado=cidadeEstado.citiesBy(cidade)
document.write("estado: ", estado)