import React from 'react'
import "./UserCard.css"

const UserCard = (props) => {
  return (
    <div className='user-container'>
      <p id='user-name'>{props.name}</p>
      <img id='user-img' src="" alt="" />
      <p id='user-desc'>Description of Niyati</p>
    </div>
  )
}

export default UserCard
