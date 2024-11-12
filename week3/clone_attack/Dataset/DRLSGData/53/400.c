int main () {
    int F28tCSKkR;
    int v4ujxUF [100] = {'\0'};
    int DFxX5GgZu;
    int v6qP3CJj5bVe [100] = {'\0'};
    int rkNo2E9qlLjZ;
    int LNxLoRbiAE;
    int *DirzT8B91E;
    int *WmQ3Hhqi;
    DFxX5GgZu = (64 - 64);
    cin >> rkNo2E9qlLjZ;
    for (F28tCSKkR = (82 - 82); F28tCSKkR < rkNo2E9qlLjZ; F28tCSKkR = F28tCSKkR +(149 - 148))
        cin >> *(WmQ3Hhqi +F28tCSKkR);
    DirzT8B91E = v6qP3CJj5bVe;
    for (F28tCSKkR = 0; F28tCSKkR < rkNo2E9qlLjZ; F28tCSKkR = F28tCSKkR +(746 - 745))
        for (LNxLoRbiAE = 0; F28tCSKkR >= LNxLoRbiAE; LNxLoRbiAE = LNxLoRbiAE +1) {
            if (!(F28tCSKkR != LNxLoRbiAE)) {
                DFxX5GgZu = DFxX5GgZu +1;
                *DirzT8B91E = *(WmQ3Hhqi +F28tCSKkR);
                DirzT8B91E = DirzT8B91E +1;
            }
            if (*(WmQ3Hhqi +F28tCSKkR) != *(WmQ3Hhqi +LNxLoRbiAE))
                continue;
            if (!(*(WmQ3Hhqi +LNxLoRbiAE) != *(WmQ3Hhqi +F28tCSKkR)))
                break;
        }
    for (F28tCSKkR = 0; DFxX5GgZu -1 > F28tCSKkR; F28tCSKkR = F28tCSKkR +1)
        cout << *(DirzT8B91E +F28tCSKkR) << ',';
    WmQ3Hhqi = v4ujxUF;
    DirzT8B91E = v6qP3CJj5bVe;
    cout << *(DirzT8B91E +DFxX5GgZu-1);
    return 0;
}

