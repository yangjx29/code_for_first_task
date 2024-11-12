int ngpmRC0Zv;
int tjdm [(1018 - 18)], zXF1vcdoa [1000];

int main () {
    for (; cin >> ngpmRC0Zv;) {
        int CqGPjH65;
        int sY5V1wKs2TFo;
        int tvuTVy7D;
        tvuTVy7D = (36 - 36);
        int qmin = 0;
        int qvDM8AgK;
        if (ngpmRC0Zv == (638 - 638))
            return (183 - 183);
        for (int i = (442 - 442);
        i < ngpmRC0Zv; i++)
            cin >> tjdm[i];
        {
            int i;
            i = (938 - 938);
            while (i < ngpmRC0Zv) {
                cin >> zXF1vcdoa[i];
                i++;
            }
        }
        sort (tjdm, tjdm + ngpmRC0Zv);
        sort (zXF1vcdoa, zXF1vcdoa + ngpmRC0Zv);
        sY5V1wKs2TFo = ngpmRC0Zv - (593 - 592);
        CqGPjH65 = ngpmRC0Zv - (192 - 191);
        qvDM8AgK = (834 - 834);
        for (; qvDM8AgK < ngpmRC0Zv;) {
            if (tjdm[qvDM8AgK] > zXF1vcdoa[qmin]) {
                qmin++;
                qvDM8AgK++;
                tvuTVy7D += (250 - 50);
            }
            else if (tjdm[qvDM8AgK] < zXF1vcdoa[qmin]) {
                CqGPjH65--;
                tvuTVy7D -= (747 - 547);
                qvDM8AgK++;
            }
            else if (tjdm[qvDM8AgK] == zXF1vcdoa[qmin]) {
                if (tjdm[sY5V1wKs2TFo] > zXF1vcdoa[CqGPjH65]) {
                    sY5V1wKs2TFo--;
                    CqGPjH65--;
                    tvuTVy7D += (218 - 18);
                }
                else if (tjdm[sY5V1wKs2TFo] < zXF1vcdoa[CqGPjH65]) {
                    qvDM8AgK++;
                    tvuTVy7D -= (426 - 226);
                    CqGPjH65--;
                }
                else if (tjdm[sY5V1wKs2TFo] == zXF1vcdoa[CqGPjH65]) {
                    if (tjdm[qvDM8AgK] > zXF1vcdoa[CqGPjH65]) {
                        tvuTVy7D += (550 - 350);
                    }
                    if (tjdm[qvDM8AgK] < zXF1vcdoa[CqGPjH65])
                        tvuTVy7D -= 200;
                    CqGPjH65--;
                    qvDM8AgK++;
                }
            }
            if (sY5V1wKs2TFo < qvDM8AgK)
                break;
        }
        cout << tvuTVy7D << endl;
    }
}

