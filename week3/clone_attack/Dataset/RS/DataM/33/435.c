int main () {
    int TELaC2S, me1DUrQkbI, sH9sxTwEXB, XsM8ve;
    getchar ();
    scanf ("%d", &me1DUrQkbI);
    for (sH9sxTwEXB = (252 - 252); me1DUrQkbI > sH9sxTwEXB; sH9sxTwEXB = sH9sxTwEXB + 1) {
        char ZbuCc8EA [MAX +1], BDBcjJW [MAX +1];
        scanf ("%s", ZbuCc8EA);
        for (XsM8ve = 0; ZbuCc8EA[XsM8ve]; XsM8ve = XsM8ve +1) {
            switch (ZbuCc8EA[XsM8ve]) {
            case 'A' :
                BDBcjJW[XsM8ve] = 'T';
                break;
            case 'T' :
                BDBcjJW[XsM8ve] = 'A';
                break;
            case 'G' :
                BDBcjJW[XsM8ve] = 'C';
                break;
            case 'C' :
                BDBcjJW[XsM8ve] = 'G';
                break;
            default :
                BDBcjJW[XsM8ve] = ZbuCc8EA[XsM8ve];
                break;
            };
        }
        BDBcjJW[XsM8ve] = ZbuCc8EA[XsM8ve];
        printf ("%s\n", BDBcjJW);
    }
    return 0;
}

