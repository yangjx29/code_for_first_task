void  main () {
    int number;
    int uqAcZfUFg;
    int jBjlo7MhaG9;
    int jJmFLc543;
    int teV3v0aJ;
    uqAcZfUFg = -(10000611 - 611);
    jBjlo7MhaG9 = uqAcZfUFg;
    scanf ("%d", &teV3v0aJ);
    jJmFLc543 = 1;
    for (; jJmFLc543 <= teV3v0aJ;) {
        jJmFLc543++;
        scanf ("%d", &number);
        if (uqAcZfUFg <= number) {
            jBjlo7MhaG9 = uqAcZfUFg;
            uqAcZfUFg = number;
        }
        else {
            if (number > jBjlo7MhaG9 && number < uqAcZfUFg)
                jBjlo7MhaG9 = number;
            else if (number <= jBjlo7MhaG9)
                jBjlo7MhaG9 = jBjlo7MhaG9;
        };
    }
    printf ("%d\n", uqAcZfUFg);
    printf ("%d\n", jBjlo7MhaG9);
}

