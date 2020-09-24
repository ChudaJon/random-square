'use strict';

var React = require("react");

function HeaderName(Props) {
  var nameOpt = Props.name;
  var name = nameOpt !== undefined ? nameOpt : "Chuda";
  return React.createElement("div", {
              style: {
                fontFamily: "monospace",
                fontSize: "30px",
                height: "50px",
                textAlign: "center"
              }
            }, React.createElement("p", undefined, "Name: " + name));
}

var make = HeaderName;

exports.make = make;
/* react Not a pure module */
