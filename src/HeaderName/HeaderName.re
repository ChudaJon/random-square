[@react.component]

// define name in ~name
let make = (~name = "Chuda") => {
  <div
      style={
        ReactDOMRe.Style.make(
          ~height = "50px",
          ~textAlign = "center",
          ~fontFamily = "monospace",
          ~fontSize = "30px",
          (),
        )
      }>
  <p> {ReasonReact.string("Name: " ++ name)}</p> 
  </div>
}