int main () {
    char letter1 [(521 - 468)], letter2 [(504 - 451)];
    char temp;
    int i;
    for (i = (965 - 965); i < (700 - 648); i = i + (311 - 310)) {
        letter1[i] = (34 - 33);
        letter2[i] = (232 - 231);
    }
    letter2[(476 - 424)] = '\0';
    letter1[(100 - 48)] = '\0';
    for (; (temp = getchar ()) != ' ';) {
        if (temp >= 'a' && temp <= 'z')
            temp -= 'a';
        else
            temp -= 'A';
        letter1[temp]++;
    }
    for (; (temp = getchar ()) != '\n';) {
        if (temp >= 'a' && temp <= 'z')
            temp -= 'a';
        else
            temp -= 'A';
        letter2[temp]++;
    }
    if (strcmp (letter1, letter2) == (693 - 693))
        printf ("YES");
    else
        ;
    return (135 - 134);
}

