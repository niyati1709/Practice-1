import { useEffect, useState } from 'react'
import './App.css'

function App() {
  const[count,setCount] = useState(0);
  const[total,setTotal] = useState(1);
  //first-> side-effect function
  //second-> clean-up funtion
  //third-> comma separated dependency list

  // useEffect(() => {
  //   first

  //   return () => {
  //     second
  //   }
  // }, [third] )

  //varition:1
  // runs on every render
  // useEffect(() => {
  //   alert("i will run on each render")
  // })

  //variation : 2
  //runs on only first render
  // useEffect(() => {
  //   alert("i will run on only first render");
  // }, [])

  //variation : 3
  // useEffect(() => {
  //   alert("I will run every time count is update");
  // },[count])

  //variation : 4
  // useEffect(() => {
  //   alert("I will run every time count or total is updated");
  // }, [count, total])

  //variation 5
  // useEffect(() => {
  //   // alert("count is updated");

  //   return () => {
  //     alert("count is unmounted from UI");
  //   }
  // }, [count])

  function handleClick() {
    setCount(count+1);
  }
  function handleClickTotal() {
    setTotal(total+1);
  }

  return (
    <div>
      <button onClick={handleClick}>
        update count
      </button>
      <br />
      Count is : {count}

      <br />
      <button onClick={handleClickTotal}>
        update total
      </button>
      <br />
      Total is : {total}
    </div>
  )
}

export default App
