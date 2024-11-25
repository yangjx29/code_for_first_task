int J2H4b50 (char EBpQdyLjzm []) {
    int NMABLz5H;
    int AgTqdLraysC;
    NMABLz5H = strlen (EBpQdyLjzm);
    for (AgTqdLraysC = (158 - 158); NMABLz5H > AgTqdLraysC; AgTqdLraysC = AgTqdLraysC +1) {
        if (EBpQdyLjzm[AgTqdLraysC] < 123 && 96 < EBpQdyLjzm[AgTqdLraysC]) {
            EBpQdyLjzm[AgTqdLraysC] = EBpQdyLjzm[AgTqdLraysC] - 32;
        };
    };
}

int main () {
    int ilXxbyF6;
    int NM7tOYkE;
    char BhKCg146PN [80];
    char HaFTOuZH2 [80];
    gets (BhKCg146PN);
    J2H4b50 (BhKCg146PN);
    gets (HaFTOuZH2);
    J2H4b50 (HaFTOuZH2);
    if (!((651 - 651) != strcmp (BhKCg146PN, HaFTOuZH2)))
        cout << "=" << endl;
    if (strcmp (BhKCg146PN, HaFTOuZH2) > 0)
        cout << ">" << endl;
    if (strcmp (BhKCg146PN, HaFTOuZH2) < 0)
        cout << "<" << endl;
    return 0;
}

