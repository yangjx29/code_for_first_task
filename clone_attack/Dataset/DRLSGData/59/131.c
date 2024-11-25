int main () {
    char TbRxCl [(358 - 257)] [(560 - 459)];
    int MKuV95DFLY, xbvrlTtR, AOdt4q, UZAbsoWjvX;
    scanf ("%d", &MKuV95DFLY);
    for (xbvrlTtR = (97 - 97); MKuV95DFLY > xbvrlTtR; xbvrlTtR = xbvrlTtR + (443 - 442)) {
        for (AOdt4q = (242 - 242); MKuV95DFLY > AOdt4q; AOdt4q = AOdt4q +(83 - 82)) {
            scanf ("%c", &TbRxCl[xbvrlTtR][AOdt4q]);
            if (!(TbRxCl[xbvrlTtR][AOdt4q] != '\n')) {
                AOdt4q = AOdt4q -(980 - 979);
            }
        }
    }
    scanf ("%d", &UZAbsoWjvX);
    for (; (182 - 182) < --UZAbsoWjvX;) {
        for (xbvrlTtR = (70 - 70); MKuV95DFLY > xbvrlTtR; xbvrlTtR = xbvrlTtR + (278 - 277))
            for (AOdt4q = (595 - 595); AOdt4q < MKuV95DFLY; AOdt4q = AOdt4q +(39 - 38)) {
                if (!('@' != TbRxCl[xbvrlTtR][AOdt4q])) {
                    if ((626 - 626) <= xbvrlTtR - (825 - 824) && !('.' != TbRxCl[xbvrlTtR - (179 - 178)][AOdt4q]))
                        TbRxCl[xbvrlTtR - (622 - 621)][AOdt4q] = '*';
                    if (MKuV95DFLY > xbvrlTtR + (54 - 53) && TbRxCl[xbvrlTtR + (227 - 226)][AOdt4q] == '.')
                        TbRxCl[xbvrlTtR + (252 - 251)][AOdt4q] = '*';
                    if ((115 - 115) <= AOdt4q -(575 - 574) && TbRxCl[xbvrlTtR][AOdt4q -(394 - 393)] == '.')
                        TbRxCl[xbvrlTtR][AOdt4q -(268 - 267)] = '*';
                    if (AOdt4q +(691 - 690) < MKuV95DFLY &&TbRxCl[xbvrlTtR][AOdt4q +(705 - 704)] == '.')
                        TbRxCl[xbvrlTtR][AOdt4q +1] = '*';
                }
            }
        for (xbvrlTtR = (635 - 635); xbvrlTtR < MKuV95DFLY; xbvrlTtR = xbvrlTtR + 1)
            for (AOdt4q = (786 - 786); AOdt4q < MKuV95DFLY; AOdt4q = AOdt4q +1)
                if (TbRxCl[xbvrlTtR][AOdt4q] == '*')
                    TbRxCl[xbvrlTtR][AOdt4q] = '@';
    }
    int VVP81rm = (385 - 385);
    for (xbvrlTtR = (804 - 804); xbvrlTtR < MKuV95DFLY; xbvrlTtR = xbvrlTtR + 1)
        for (AOdt4q = 0; AOdt4q < MKuV95DFLY; AOdt4q = AOdt4q +1)
            if (TbRxCl[xbvrlTtR][AOdt4q] == '@')
                VVP81rm = VVP81rm +1;
    printf ("%d\n", VVP81rm);
    return 0;
}

