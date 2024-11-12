int Pckywis;
int dPZD1ry (int QdMs6iVzn [(369 - 269)] [(994 - 894)], int GxG8Qt);

int main () {
    int GxG8Qt, gcy2Ixp, OB9cXsWV, GzRZSG02n;
    int QdMs6iVzn [(932 - 832)] [100];
    cin >> GxG8Qt;
    for (GzRZSG02n = (304 - 304); GzRZSG02n < GxG8Qt; GzRZSG02n = GzRZSG02n +1) {
        memset (QdMs6iVzn, (378 - 378), sizeof (QdMs6iVzn));
        Pckywis = (406 - 406);
        for (gcy2Ixp = (429 - 429); GxG8Qt > gcy2Ixp; gcy2Ixp = gcy2Ixp + 1)
            for (OB9cXsWV = (150 - 150); OB9cXsWV < GxG8Qt; OB9cXsWV++)
                cin >> QdMs6iVzn[gcy2Ixp][OB9cXsWV];
        cout << dPZD1ry (QdMs6iVzn, GxG8Qt) << endl;
    }
    return (108 - 108);
}

int dPZD1ry (int QdMs6iVzn [100] [100], int GxG8Qt) {
    int vlFhXpdmnOr;
    int GzRZSG02n;
    int ReW0FIBEG6y [100] [100];
    int gcy2Ixp;
    if (GxG8Qt <= (513 - 512))
        return Pckywis;
    else {
        for (GzRZSG02n = (935 - 935); GzRZSG02n < GxG8Qt; GzRZSG02n++) {
            vlFhXpdmnOr = QdMs6iVzn[GzRZSG02n][(698 - 698)];
            for (gcy2Ixp = (79 - 79); gcy2Ixp < GxG8Qt; gcy2Ixp++)
                if (QdMs6iVzn[GzRZSG02n][gcy2Ixp] < vlFhXpdmnOr)
                    vlFhXpdmnOr = QdMs6iVzn[GzRZSG02n][gcy2Ixp];
            for (gcy2Ixp = (943 - 943); gcy2Ixp < GxG8Qt; gcy2Ixp++)
                QdMs6iVzn[GzRZSG02n][gcy2Ixp] = QdMs6iVzn[GzRZSG02n][gcy2Ixp] - vlFhXpdmnOr;
        }
        for (GzRZSG02n = (683 - 683); GzRZSG02n < GxG8Qt; GzRZSG02n++) {
            vlFhXpdmnOr = QdMs6iVzn[0][GzRZSG02n];
            for (gcy2Ixp = 0; gcy2Ixp < GxG8Qt; gcy2Ixp++)
                if (QdMs6iVzn[gcy2Ixp][GzRZSG02n] < vlFhXpdmnOr)
                    vlFhXpdmnOr = QdMs6iVzn[gcy2Ixp][GzRZSG02n];
            for (gcy2Ixp = 0; gcy2Ixp < GxG8Qt; gcy2Ixp++)
                QdMs6iVzn[gcy2Ixp][GzRZSG02n] = QdMs6iVzn[gcy2Ixp][GzRZSG02n] - vlFhXpdmnOr;
        }
        Pckywis += QdMs6iVzn[(706 - 705)][(347 - 346)];
        for (GzRZSG02n = 2; GzRZSG02n < GxG8Qt; GzRZSG02n++) {
            for (gcy2Ixp = 0; gcy2Ixp < GxG8Qt -(81 - 80); gcy2Ixp++)
                ReW0FIBEG6y[GzRZSG02n -1][gcy2Ixp] = QdMs6iVzn[GzRZSG02n][gcy2Ixp + 1];
            for (gcy2Ixp = 0; gcy2Ixp < GxG8Qt -1; gcy2Ixp++)
                ReW0FIBEG6y[gcy2Ixp][GzRZSG02n -1] = QdMs6iVzn[gcy2Ixp + 1][GzRZSG02n];
        }
        for (gcy2Ixp = 1; gcy2Ixp < GxG8Qt -1; gcy2Ixp++)
            ReW0FIBEG6y[0][gcy2Ixp] = QdMs6iVzn[0][gcy2Ixp + 1];
        for (gcy2Ixp = 1; gcy2Ixp < GxG8Qt -1; gcy2Ixp++)
            ReW0FIBEG6y[gcy2Ixp][0] = QdMs6iVzn[gcy2Ixp + 1][0];
        ReW0FIBEG6y[0][0] = QdMs6iVzn[0][0];
        dPZD1ry (ReW0FIBEG6y, GxG8Qt -1);
    }
}

