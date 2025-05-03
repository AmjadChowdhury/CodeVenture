import PropTypes, { bool, string } from "prop-types";

const ChildGreetings1 = (props) => {
    
    if(props.isLog)
    {
        return <h1 className="logIn">Welcome {props.userName}</h1>
    }
    else
    {
        return <h1 className="notLogIn">Sorry, You are not valid person</h1>
    }
};

ChildGreetings1.propTypes = {
    isLog: bool,
    userName: string
}

ChildGreetings1.defaultProps = {
    isLog: false,
    userName: "Yoo bro"
}

export default ChildGreetings1;