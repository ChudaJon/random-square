'use strict';

var React = require("react");
var ReactDom = require("react-dom");
var HeaderName$RandomSquare = require("./HeaderName/HeaderName.bs.js");
var ExampleStyles$RandomSquare = require("./ExampleStyles.bs.js");
var SquarePosition$RandomSquare = require("./SquarePosition/SquarePosition.bs.js");

var style = document.createElement("style");

document.head.appendChild(style);

style.innerHTML = ExampleStyles$RandomSquare.style;

function makeContainer(param) {
  var container = document.createElement("div");
  container.className = "container";
  var content = document.createElement("div");
  content.className = "containerContent";
  container.appendChild(content);
  document.body.appendChild(container);
  return content;
}

ReactDom.render(React.createElement(HeaderName$RandomSquare.make, {}), makeContainer(undefined));

ReactDom.render(React.createElement(SquarePosition$RandomSquare.make, {}), makeContainer(undefined));

exports.style = style;
exports.makeContainer = makeContainer;
/* style Not a pure module */
