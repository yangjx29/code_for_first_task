void  g4aAyxnr () {
    char wNFTech [100];
    gets (wNFTech);
    puts (wNFTech);
    if (strcmp (wNFTech, "end"))
        g4aAyxnr ();
    else
        return;
}

int main () {
    g4aAyxnr ();
    return 0;
}

