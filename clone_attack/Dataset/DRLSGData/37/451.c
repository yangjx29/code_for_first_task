int main () {
    int QbkW0X2uhyFf;
    char PnvoXzw [100100];
    int y2NOJTrvDFLo;
    int pCr2TVkq;
    int V8fTYneGM;
    int PKM4LmQEdZY;
    int skNdcqs970 [(425 - 399)];
    int DdjDqE3nGR [(256 - 230)];
    int IblxGtumYi5;
    cin >> PKM4LmQEdZY;
    cin.get ();
    {
        QbkW0X2uhyFf = (839 - 838);
        for (; PKM4LmQEdZY >= QbkW0X2uhyFf;) {
            pCr2TVkq = (571 - 571);
            memset (DdjDqE3nGR, (523 - 523), (940 - 914) * (447 - 443));
            cin.getline (PnvoXzw, 100100);
            V8fTYneGM = strlen (PnvoXzw);
            {
                IblxGtumYi5 = (685 - 685);
                for (; IblxGtumYi5 < V8fTYneGM;) {
                    y2NOJTrvDFLo = (int) PnvoXzw[IblxGtumYi5] - 'a';
                    if (!DdjDqE3nGR[y2NOJTrvDFLo]) {
                        skNdcqs970[pCr2TVkq] = y2NOJTrvDFLo;
                        pCr2TVkq = pCr2TVkq + (317 - 316);
                    }
                    DdjDqE3nGR[y2NOJTrvDFLo]++;
                    IblxGtumYi5 = IblxGtumYi5 +(387 - 386);
                }
            }
            {
                IblxGtumYi5 = (972 - 972);
                for (; IblxGtumYi5 < pCr2TVkq;) {
                    if (DdjDqE3nGR[skNdcqs970[IblxGtumYi5]] == 1) {
                        cout << (char) (skNdcqs970[IblxGtumYi5] + 'a') << endl;
                        break;
                    }
                    IblxGtumYi5 = IblxGtumYi5 +1;
                }
            }
            if (IblxGtumYi5 == pCr2TVkq)
                cout << "no" << endl;
            QbkW0X2uhyFf = QbkW0X2uhyFf +1;
        }
    }
    cin.get ();
    cin.get ();
    return (494 - 494);
}

