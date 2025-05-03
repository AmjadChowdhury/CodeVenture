import style from './Button.module.css'

const Button = () => {
    const inlineStyle = {
        backgroundColor: "blue",
        color: "white",
        borderRadius: "10px",
        padding: "10px",
        margin: "2px",
        border: "none",
        cursor: "pointer"
    }
    return (
        <div>
            <h1>For External, module, inline</h1>
            <button className='button'>Click Me first external css</button>
            <button className={style.button}>Click Me modules css</button>
            <button style={inlineStyle}>Click Me Inline css</button>
        </div>
    );
};

export default Button;