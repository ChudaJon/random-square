'use strict';

var React = require("react");
var Js_math = require("bs-platform/lib/js/js_math.js");
var Caml_array = require("bs-platform/lib/js/caml_array.js");

var colorArray = [
  "red",
  "green",
  "blue",
  "salmon",
  "moccasin",
  "olive",
  "turquoise",
  "slateblue",
  "\tlightpink",
  "darkslategray",
  "rosybrown"
];

function SquarePosition(Props) {
  return React.createElement("div", {
              style: {
                display: "flex",
                height: "400px",
                margin: "auto",
                width: "400px",
                alignItems: "center",
                flexDirection: "row",
                flexWrap: "wrap",
                justifyContent: "center"
              }
            }, React.createElement("p", {
                  style: {
                    background: "rgb(" + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ")"))))),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }), React.createElement("p", {
                  style: {
                    background: "rgb(" + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ")"))))),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }), React.createElement("p", {
                  style: {
                    background: "rgb(" + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ")"))))),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }), React.createElement("p", {
                  style: {
                    background: Caml_array.caml_array_get(colorArray, Js_math.floor(Math.random() * 11.0)),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }), React.createElement("p", {
                  style: {
                    background: Caml_array.caml_array_get(colorArray, Js_math.floor(Math.random() * 11.0)),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }), React.createElement("p", {
                  style: {
                    background: Caml_array.caml_array_get(colorArray, Js_math.floor(Math.random() * 11.0)),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }), React.createElement("p", {
                  style: {
                    background: "rgb(" + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ")"))))),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }), React.createElement("p", {
                  style: {
                    background: "rgb(" + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ")"))))),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }), React.createElement("p", {
                  style: {
                    background: "rgb(" + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ("," + (String(Js_math.floor(Math.random() * 255.0)) + ")"))))),
                    height: "100px",
                    margin: "15px",
                    width: "100px",
                    borderRadius: "4px"
                  }
                }));
}

var make = SquarePosition;

exports.colorArray = colorArray;
exports.make = make;
/* react Not a pure module */
