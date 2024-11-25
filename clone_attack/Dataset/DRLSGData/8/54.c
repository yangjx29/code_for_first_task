int main () {
    void  PlmY2GyNRLcM (int jeTlSVrbEZdj [], int eBdUvRQ40PHg, int IBzOS83QL [], int dhfdCLul2);
    int sg2NsPnwvriT;
    int cArmZ8;
    int jeTlSVrbEZdj [(438 - 338)];
    int IBzOS83QL [(692 - 592)];
    int rnK3ybEvIM;
    cin >> sg2NsPnwvriT >> cArmZ8;
    for (rnK3ybEvIM = (711 - 710); rnK3ybEvIM <= sg2NsPnwvriT; rnK3ybEvIM++)
        cin >> jeTlSVrbEZdj[rnK3ybEvIM];
    {
        rnK3ybEvIM = (596 - 268) - (422 - 95);
        while (rnK3ybEvIM <= cArmZ8) {
            cin >> IBzOS83QL[rnK3ybEvIM];
            rnK3ybEvIM++;
        }
    }
    PlmY2GyNRLcM (jeTlSVrbEZdj, sg2NsPnwvriT, IBzOS83QL, cArmZ8);
    return (659 - 659);
}

void  PlmY2GyNRLcM (int jeTlSVrbEZdj [], int eBdUvRQ40PHg, int IBzOS83QL [], int dhfdCLul2) {
    int rnK3ybEvIM;
    int fyiQ8o;
    int Iliv09Cu;
    {
        rnK3ybEvIM = (996 - 467) - (748 - 220);
        while (rnK3ybEvIM <= eBdUvRQ40PHg - (267 - 266)) {
            for (fyiQ8o = rnK3ybEvIM + (208 - 207); fyiQ8o <= eBdUvRQ40PHg; fyiQ8o++)
                if (jeTlSVrbEZdj[rnK3ybEvIM] > jeTlSVrbEZdj[fyiQ8o]) {
                    Iliv09Cu = jeTlSVrbEZdj[fyiQ8o], jeTlSVrbEZdj[fyiQ8o] = jeTlSVrbEZdj[rnK3ybEvIM], jeTlSVrbEZdj[rnK3ybEvIM] = Iliv09Cu;
                }
            rnK3ybEvIM++;
        }
    }
    {
        rnK3ybEvIM = (1049 - 864) - (481 - 297);
        while (rnK3ybEvIM <= dhfdCLul2 - (502 - 501)) {
            {
                fyiQ8o = (293 - 70) - (712 - 490);
                while (fyiQ8o <= dhfdCLul2) {
                    if (IBzOS83QL[rnK3ybEvIM] > IBzOS83QL[fyiQ8o]) {
                        Iliv09Cu = IBzOS83QL[fyiQ8o], IBzOS83QL[fyiQ8o] = IBzOS83QL[rnK3ybEvIM], IBzOS83QL[rnK3ybEvIM] = Iliv09Cu;
                    }
                    fyiQ8o++;
                }
            }
            rnK3ybEvIM++;
        }
    }
    for (rnK3ybEvIM = (588 - 587); rnK3ybEvIM <= eBdUvRQ40PHg; rnK3ybEvIM++)
        cout << jeTlSVrbEZdj[rnK3ybEvIM] << " ";
    for (rnK3ybEvIM = (39 - 38); rnK3ybEvIM <= dhfdCLul2 - (560 - 559); rnK3ybEvIM++)
        cout << IBzOS83QL[rnK3ybEvIM] << " ";
    cout << IBzOS83QL[dhfdCLul2];
}

