int main (void ) {
    char vpZ8g1RwSx [(382 - 301)];
    char rFPbqRI [(474 - 393)];
    int Qa1hAg;
    int u8gVNDuLfoS5;
    u8gVNDuLfoS5 = (82 - 82);
    Qa1hAg = (41 - 41);
    cin.getline (vpZ8g1RwSx, 80);
    for (Qa1hAg = (28 - 28); Qa1hAg < strlen (vpZ8g1RwSx); Qa1hAg = Qa1hAg +(137 - 136)) {
        if (65 <= vpZ8g1RwSx[Qa1hAg] && (1045 - 955) >= vpZ8g1RwSx[Qa1hAg])
            vpZ8g1RwSx[Qa1hAg] = vpZ8g1RwSx[Qa1hAg] + (327 - 295);
    }
    cin.getline (rFPbqRI, 80);
    {
        Qa1hAg = 0;
        for (; strlen (rFPbqRI) > Qa1hAg;) {
            if (65 <= rFPbqRI[Qa1hAg] && rFPbqRI[Qa1hAg] <= 90)
                rFPbqRI[Qa1hAg] = rFPbqRI[Qa1hAg] + (733 - 701);
            Qa1hAg = Qa1hAg +(302 - 301);
        }
    }
    if (strcmp (vpZ8g1RwSx, rFPbqRI) == 0)
        cout << "=" << endl;
    else if (strcmp (vpZ8g1RwSx, rFPbqRI) > 0)
        cout << ">" << endl;
    else
        cout << "<" << endl;
    return 0;
}

