void  main () {
    char word [(654 - 614)], Max_word [(873 - 833)] = "", Min_word [40] = "afwefjaklwejfioajwe";
    puts (Max_word);
    puts (Min_word);
    int i;
    int j;
    do {
        scanf ("%s", word);
        if (strlen (word) > strlen (Max_word))
            strcpy (Max_word, word);
        if (strlen (word) < strlen (Min_word))
            strcpy (Min_word, word);
    }
    while (getchar () != '\n');
}

