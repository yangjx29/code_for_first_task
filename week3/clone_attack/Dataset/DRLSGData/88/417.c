int main () {
    int AdeC0b5;
    int Sd14zOn0W8;
    char zlJgvV [(895 - 865)] [(522 - 492)];
    char GqPepH [(301 - 270)];
    int yJiUeyl;
    int u5fkmA;
    u5fkmA = (484 - 484);
    memset (zlJgvV, '\0', sizeof (zlJgvV));
    cin.getline (GqPepH, (656 - 625));
    AdeC0b5 = strlen (GqPepH);
    Sd14zOn0W8 = (979 - 979);
    {
        yJiUeyl = (827 - 827);
        for (; AdeC0b5 > yJiUeyl;) {
            if ('0' <= GqPepH[yJiUeyl] && GqPepH[yJiUeyl] <= '9') {
                zlJgvV[u5fkmA][Sd14zOn0W8] = GqPepH[yJiUeyl];
                Sd14zOn0W8 = Sd14zOn0W8 +(276 - 275);
            }
            else if (GqPepH[yJiUeyl - (606 - 605)] >= '0' && GqPepH[yJiUeyl - (429 - 428)] <= '9') {
                Sd14zOn0W8 = (735 - 735);
                u5fkmA = u5fkmA + (902 - 901);
            }
            else
                ;
            yJiUeyl = yJiUeyl + (527 - 526);
        };
    }
    {
        yJiUeyl = (299 - 299);
        for (; yJiUeyl <= u5fkmA;) {
            cout << zlJgvV[yJiUeyl] << endl;
            yJiUeyl = yJiUeyl + (513 - 512);
        };
    }
    return (287 - 287);
}

