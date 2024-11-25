int main () {
    int f6EqlQ, X4qzw20S9, bbAeX81, d;
    scanf ("%d", &d);
    f6EqlQ = d % 3;
    X4qzw20S9 = d % 5;
    bbAeX81 = d % 7;
    if (!f6EqlQ) {
        if (!X4qzw20S9) {
            if (!bbAeX81)
                ;
            else
                printf ("3 5");
        }
        else if (!bbAeX81)
            printf ("3 7");
        else
            ;
    }
    else {
        if (!X4qzw20S9) {
            if (!bbAeX81)
                printf ("5 7");
            else
                ;
        }
        else if (!bbAeX81)
            ;
        else
            printf ("n");
    }
    return 0;
}

