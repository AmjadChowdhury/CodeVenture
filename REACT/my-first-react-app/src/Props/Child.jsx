import PropTypes from 'prop-types'
import style from '../Props/Child.module.css'

const Child = (props) => {
    return (
        <div className={style.child}>
            <h1>Name : {props.name}</h1>
            <h1>Age : {props.age}</h1>
            <h1>Elder : {props.isElder ? "Yes" : "No"}</h1>
        </div>
    );
};
// PropTypes are used to validate the types of props passed to a React component. This is especially useful for catching bugs during development.

Child.propTypes = {
    name: PropTypes.string,
    age: PropTypes.number,
    isElder: PropTypes.bool
}

// defaultProps are used to specify default values for props when none are provided.

Child.defaultProps = {
    name : "Mr. chudur budur",
    age: 0,
    isElder: false
}



export default Child;