[@bs.val] external document: Js.t({..}) = "document";

// Style define in example
let style = document##createElement("style");
document##head##appendChild(style);
style##innerHTML #= ExampleStyles.style;

// container's style
let makeContainer = () => {
  let container = document##createElement("div");
  container##className #= "container";

  let content = document##createElement("div");
  content##className #= "containerContent";

  let () = container##appendChild(content);
  let () = document##body##appendChild(container);

  content;
};


// Render 2 Parts.
// Header name part
ReactDOMRe.render(
  <HeaderName />,
  makeContainer(),
);

// 9 squares pare
ReactDOMRe.render(
  <SquarePosition />,
  makeContainer(),
);

