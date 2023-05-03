const form = document.querySelector("#form");
const btnSubmit = document.querySelector("#btnSubmit");

form.addEventListener("submit", function (event) {
  event.preventDefault(); // Prevent the form from submitting and refreshing the page

  //form = event.target
  // Retrieve the form inputs and create an object
  const firstName = form.fName.value;
  const lastName = form.lName.value;
  const password = form.password.value;
  const country = form.select.value;
  const message = form.textarea.value;

  const formData = {
    firstName,
    lastName,
    password,
    country,
    message,
  };

  // Stringify the object and log it to the console
  const formDataString = JSON.stringify(formData);
  console.log(formDataString);
});


function showSubmitNotification() {
  Toastify({
    text: "submitted successfully.",
    duration: 5000,
    newWindow: true,
    close: true,
    gravity: "center",
    position: "center",
    className: "submit-toast",

    backgroundColor: "linear-gradient(to right, #1dd1a1, #7b8ed8)",
    stopOnFocus: true,
  }).showToast();
}
