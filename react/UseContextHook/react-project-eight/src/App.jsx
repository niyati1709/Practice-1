import { useState } from 'react'
import './App.css'
import { createContext } from 'react'
import ChildA from './components/ChildA';


//step1 : create context
const UserContext = createContext();
//step2 : wrap all the children inside a provider
//step3 : pass the value
//step4 : consumer k andar jake consume kro

function App() {
  const[user,setUser] = useState({name:"Niyati"});

  return (
    <div>
      <UserContext.Provider value={user}>
        <ChildA />
      </UserContext.Provider>
      
    </div>
  )
}

export default App
