int main () {
    char vTx7B92;
    char zLHdJfhABakW;
    vTx7B92 = getchar ();
    zLHdJfhABakW = getchar ();
    printf ("%c", vTx7B92);
    for (; zLHdJfhABakW != EOF;) {
        if (!(!(' ' != vTx7B92) && !(' ' != zLHdJfhABakW)))
            printf ("%c", zLHdJfhABakW);
        vTx7B92 = zLHdJfhABakW;
        zLHdJfhABakW = getchar ();
    }
    return (151 - 151);
}

