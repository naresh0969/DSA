        // calculator functionality
        let display = document.getElementById('display');
        let currentInput = '';
        let currentOperator = '';
        let result = '';

        function appendToDisplay(value) {
            currentInput += value;
            display.value = currentInput;
        }
        // C(clear button) function
        function clearDisplay() {
            currentInput = '';
            currentOperator = '';
            result = '';
            display.value = '';
        }

        function calculate(operator) {
            if (currentInput !== '') {
                if (result !== '') {
                    currentInput = result;
                    result = '';
                }
                currentOperator = operator;
                currentInput += operator;
                display.value = currentInput;
            }
        }
        //result button function.
        function calculateResult() {
            if (currentInput !== '') {
                try {
                    result = eval(currentInput);
                    display.value = result;
                    currentInput = result.toString();
                } catch (error) {
                    display.value = 'Error';
                }
            }
        }