import { useState } from 'react'
import './App.css'
import Card from './components/Card'

function App() {

  const[name,setName] = useState('');

  return (
    <div>
      <Card name={name} setName={setName} />
      <p> {name} </p>
    </div>
  )
}

export default App
