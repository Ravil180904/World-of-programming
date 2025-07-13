// DOM Element
const btnEL = document.getElementById("btn");
const quoteEl = document.getElementById("quote");
const apiUrl = 'https://api.api-ninjas.com/v1/quotes?category=happiness';
const apikey = "MNemEr9THSVTCxISru9Snw==VJeeHWGzXAbYm3tw"

const options = {
    method: "GET",
    headers: {
        "X-Api-key": apiKey,
    },
};

const getJoke = async () => {
    try {
        quoteEl.innerText = "Loading...";
        const response = await fetch(apiUrl, options);
        const data = await response.json();
        const quote = data[0].quote;
        console.log(quote);
        quoteEl.innerText = quote;
    }
    catch (error) {
        quoteEl.innerText = "An error hapenned, try again later.";
        console.log(error);
    }
};
getJoke();

btnEL.addEventListener("click", getJoke); 