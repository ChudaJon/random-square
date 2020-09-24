// Define variables
let colorArray = [|"red", "green", "blue","salmon", "moccasin", "olive", "turquoise", "slateblue", "	lightpink", "darkslategray", "rosybrown"|];

[@react.component]

let make = () => {
  <div
    style={
      ReactDOMRe.Style.make(
      ~height = "400px",
      ~width = "400px",
      ~display = "flex",
      ~flexDirection = "row",
      ~flexWrap = "wrap",
      ~justifyContent = "center",
      ~alignItems = "center",
      ~margin = "auto",
      (),
      )
    }>
  // Properties of each square (random color by 2 methods)
  // 1. random number in rgb
  // 2. random color in colorArray (define variable)
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = "rgb(" ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ ")",
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px",  
        (),
      )
    }> 
  </p> 
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = "rgb(" ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ ")",
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px",  
        (),
      )
    }>
  </p>
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = "rgb(" ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ ")",
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px", 
        (),
      )
    }>
  </p>
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = colorArray[Js.Math.floor(Js.Math.random()*.11.0)],
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px", 
        (),
      )
    }>
  </p>  
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = colorArray[Js.Math.floor(Js.Math.random()*.11.0)],
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px", 
        (),
      )
    }>
  </p>  
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = colorArray[Js.Math.floor(Js.Math.random()*.11.0)],
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px", 
        (),
      )
    }>
  </p>
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = "rgb(" ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ ")",
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px", 
        (),
      )
    }>
  </p>  
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = "rgb(" ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ ")",
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px", 
        (),
      )
    }>
  </p>  
  <p
    style={
      ReactDOMRe.Style.make(
        ~background = "rgb(" ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ "," ++ string_of_int(Js.Math.floor(Js.Math.random()*.255.0)) ++ ")",
        ~borderRadius = "4px",
        ~height = "100px",
        ~width = "100px",
        ~margin = "15px", 
        (),
      )
    }>
  </p>
  </div>
};








