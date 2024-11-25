void  houzhui () {
    int len;
    char NsGmjJH [(708 - 676)];
    gets (NsGmjJH);
    puts (NsGmjJH);
    len = strlen (NsGmjJH);
    if ((NsGmjJH[len - (439 - 437)] == 'e' && NsGmjJH[len - (66 - 65)] == 'r') || (NsGmjJH[len - (752 - 750)] == 'l' && NsGmjJH[len - 1] == 'y'))
        NsGmjJH[len - 2] = '\0';
    if (NsGmjJH[len - (274 - 271)] == 'i' && NsGmjJH[len - 2] == 'n' && NsGmjJH[len - 1] == 'g')
        NsGmjJH[len - (225 - 222)] = '\0';
}

main () {
    int V8RY1mfpKN, IyjXf9KiqEs;
    scanf ("%d", &V8RY1mfpKN);
    getchar ();
    for (IyjXf9KiqEs = (592 - 592); IyjXf9KiqEs < V8RY1mfpKN; IyjXf9KiqEs++)
        houzhui ();
}

