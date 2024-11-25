void  main () {
    char hiJsRZvHa [102] = {' '};
    char *AfIFA9wzJ;
    gets (hiJsRZvHa);
    hiJsRZvHa[strlen (hiJsRZvHa)] = hiJsRZvHa[0];
    for (AfIFA9wzJ = hiJsRZvHa; AfIFA9wzJ < hiJsRZvHa + strlen (hiJsRZvHa); AfIFA9wzJ++)
        *AfIFA9wzJ += *(AfIFA9wzJ +1);
    hiJsRZvHa[strlen (hiJsRZvHa) - 1] = '\0';
    printf ("%s", hiJsRZvHa);
}

