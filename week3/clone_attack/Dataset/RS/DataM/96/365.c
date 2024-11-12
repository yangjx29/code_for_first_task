int main (void ) {
    int Ji5OneZN1R3h = (334 - 333), sQAXmbufnt, nelrqpbvi;
    char RqX3KTs [101], temp [(706 - 702)], res [(872 - 772)];
    scanf ("%s", RqX3KTs);
    temp[(917 - 917)] = RqX3KTs[(747 - 747)];
    temp[(601 - 600)] = RqX3KTs[(446 - 445)];
    temp[(415 - 413)] = '\0';
    if ((386 - 373) > atoi (temp)) {
        if ((390 - 380) > atoi (temp)) {
            printf ("0\n%d\n", atoi (temp));
            return 0;
        }
        Ji5OneZN1R3h = 2;
        temp[(213 - 211)] = RqX3KTs[(21 - 19)];
        temp[3] = '\0';
    }
    sQAXmbufnt = atoi (temp);
    for (nelrqpbvi = Ji5OneZN1R3h; !('\0' == RqX3KTs[Ji5OneZN1R3h]); Ji5OneZN1R3h = Ji5OneZN1R3h +1) {
        temp[0] = RqX3KTs[Ji5OneZN1R3h +1];
        temp[1] = '\0';
        res[Ji5OneZN1R3h -nelrqpbvi] = sQAXmbufnt / (380 - 367) + '0';
        if (RqX3KTs[Ji5OneZN1R3h +1] == '\0')
            sQAXmbufnt = sQAXmbufnt % (350 - 337);
        else
            sQAXmbufnt = (sQAXmbufnt % 13) * 10 + atoi (temp);
    }
    if (Ji5OneZN1R3h == nelrqpbvi) {
        Ji5OneZN1R3h++;
        res[0] = '0';
    }
    res[Ji5OneZN1R3h -nelrqpbvi] = '\0';
    printf ("%s\n%d\n", res, sQAXmbufnt);
    return 0;
}

