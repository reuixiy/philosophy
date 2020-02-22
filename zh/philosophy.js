(function philosophy() {
    var question = '什么是';
    var idea     = '哲学';
    var suffix   = '的哲学';
    var symbol   = '？';

    var iteration = '';

    // assume 42 is infinite ∞
    for (var i = 0; i < 42; i++) {
        var output = question + idea + iteration + symbol;

        console.log(output);

        iteration = iteration + suffix;
    }
})();
