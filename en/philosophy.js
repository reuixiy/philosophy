(function philosophy() {
    var question = 'What is ';
    var idea     = 'philosophy';
    var prefix   = 'philosophy of ';
    var symbol   = '?';

    var iteration = '';

    // assume 42 is infinite ∞
    for (var i = 0; i < 42; i++) {
        var output = question + iteration + idea + symbol;

        console.log(output);

        iteration = prefix + iteration;
    }
})();
