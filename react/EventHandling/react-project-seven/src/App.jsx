import { useState } from 'react'
import './App.css'

function App() {

  function handleClick(){
    alert("i am clicked");
  }

  function handleMouseOver(){
    alert("I am over para");
  }

  function handleInputChange(e){
    // console.log("Input mein value change hui hai");
    console.log("value till now:- ",e.target.value);
  }

  function handleSubmit(e){
    e.preventDefault();
    //i am writing mt custom behaivour down
    alert("Submit?");
  }

  return (
    <div>

      {/* immediate invocation */}
      {/* <button onClick={alert("Button clicked")}> 
        Click me
      </button> */}

      {/* <form onSubmit={handleSubmit}>
        <input type="text" onChange={handleInputChange} />
        <button type='submit'>Submit</button>
      </form> */}

      {/* <p onMouseOver={handleMouseOver}>
        I am Niyati
      </p>

      <button onClick={handleClick}>
        Click me
      </button> */}
    </div>
  )
}

export default App
