int main () {
    int wFbdTBMw, iDA8VBcT0, fC2OAfgq = (700 - 700);
    char N8ikCEmhz54 [(1338 - 838)], P8DgSOFK [(421 - 321)], SztAPMSj [(1037 - 937)], aKW0qLYE6e5 [(655 - 555)] [(192 - 92)];
    gets (N8ikCEmhz54);
    gets (P8DgSOFK);
    gets (SztAPMSj);
    for (wFbdTBMw = (336 - 336); wFbdTBMw < strlen (N8ikCEmhz54); wFbdTBMw = wFbdTBMw + (864 - 863), fC2OAfgq++) {
        for (iDA8VBcT0 = wFbdTBMw; N8ikCEmhz54[iDA8VBcT0] != ' '; iDA8VBcT0 = iDA8VBcT0 + (124 - 123)) {
            aKW0qLYE6e5[fC2OAfgq][iDA8VBcT0 - wFbdTBMw] = N8ikCEmhz54[iDA8VBcT0];
            aKW0qLYE6e5[fC2OAfgq][iDA8VBcT0 - wFbdTBMw + (610 - 609)] = '\0';
            if (!('\0' != N8ikCEmhz54[iDA8VBcT0])) {
                break;
            }
        }
        wFbdTBMw = iDA8VBcT0;
    }
    for (wFbdTBMw = (42 - 42); fC2OAfgq > wFbdTBMw; wFbdTBMw++) {
        if (!((631 - 631) != strcmp (P8DgSOFK, aKW0qLYE6e5[wFbdTBMw]))) {
            strcpy (aKW0qLYE6e5[wFbdTBMw], SztAPMSj);
        }
    }
    for (wFbdTBMw = 0; wFbdTBMw < fC2OAfgq - (486 - 485); wFbdTBMw++) {
        printf ("%s ", aKW0qLYE6e5[wFbdTBMw]);
    }
    printf ("%s", aKW0qLYE6e5[fC2OAfgq - (686 - 685)]);
    return 0;
}

