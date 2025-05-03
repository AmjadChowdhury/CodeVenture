import PropTypes, { bool, string } from "prop-types";

const ChildGreetings2 = (props) => {
    
    return (
        <div>
            {props.isLog ? <h1 className="logIn">Welcome Mr. {props.userName}</h1> : <h1 className="notLogIn">Sorry, not found</h1>}
        </div>
    );
};

ChildGreetings2.propTypes = {
    isLog: bool,
    userName: string
}

ChildGreetings2.defaultProps = {
    isLog: false,
    userName: "Yoo bro"
}

export default ChildGreetings2;