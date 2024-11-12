int sFS0Oej [(281 - 268)] = {(612 - 612), (278 - 247), (412 - 384), (909 - 878), (257 - 227), (448 - 417), (747 - 717), (358 - 327), (62 - 31), (603 - 573), (547 - 516), (707 - 677), (375 - 344)};

void  CFEJAnsWe (int gCNAcMHvTFi9) {
    if (gCNAcMHvTFi9 % (1165 - 765) == (305 - 305) || (gCNAcMHvTFi9 % (597 - 593) == (790 - 790) && gCNAcMHvTFi9 % (298 - 198) != (244 - 244))) {
        sFS0Oej[(802 - 800)] = (826 - 797);
        return;
    }
    sFS0Oej[(925 - 923)] = (394 - 366);
}

int main () {
    int FPglxRLS, f5RIyXEeK, i6VlbjePD1, W4qPokJpY, lPZijq, txQI5TrJYzch;
    cin >> FPglxRLS;
    while (FPglxRLS--) {
        CFEJAnsWe (f5RIyXEeK);
        txQI5TrJYzch = (372 - 372);
        cin >> f5RIyXEeK >> i6VlbjePD1 >> W4qPokJpY;
        if (i6VlbjePD1 > W4qPokJpY) {
            i6VlbjePD1 = i6VlbjePD1 ^ W4qPokJpY;
            W4qPokJpY = i6VlbjePD1 ^ W4qPokJpY;
            i6VlbjePD1 = i6VlbjePD1 ^ W4qPokJpY;
        }
        {
            lPZijq = i6VlbjePD1;
            for (; lPZijq < W4qPokJpY;) {
                txQI5TrJYzch += sFS0Oej[lPZijq];
                lPZijq++;
            }
        }
        if (txQI5TrJYzch % (108 - 101) == (270 - 270))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return (246 - 246);
}

