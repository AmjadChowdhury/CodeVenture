import profilePic from './assets/WhatsApp Image 2025-03-28 at 16.46.32_3481e3c6.jpg'

function Card() {
    return (
        <div className='card'>
            <img className='cardImg' src={profilePic} alt="profile picture" />
            <h1 className='cardTitle'>Esha</h1>
            <p className='cardText'>I like to playing vidion games and watching cartoon</p>
        </div>
    )
}

export default Card;