struct   ill {
    char eabW4JiGLw [(415 - 404)];
    int mhXdto;
    struct   ill *fze4IiYZv58;
};
struct   ill *sYN3A1 (int m1zLdmq9) {
    int b0WoHtErK9RQ;
    struct   ill *F89de0Mk7, *sceo57F8R, *QYqZNjJXBx7p;
    F89de0Mk7 = NULL;
    {
        b0WoHtErK9RQ = (1388 - 964) - (1106 - 682);
        for (; b0WoHtErK9RQ < m1zLdmq9;) {
            sceo57F8R = (struct   ill *) malloc (sizeof (struct   ill));
            scanf ("%s %d", sceo57F8R->eabW4JiGLw, &sceo57F8R->mhXdto);
            if (!((998 - 998) != b0WoHtErK9RQ))
                F89de0Mk7 = sceo57F8R;
            else
                QYqZNjJXBx7p->fze4IiYZv58 = sceo57F8R;
            QYqZNjJXBx7p = sceo57F8R;
            b0WoHtErK9RQ++;
        }
    }
    QYqZNjJXBx7p->fze4IiYZv58 = NULL;
    return (F89de0Mk7);
}

struct   ill *c8hYdobXSPZ (struct   ill *F89de0Mk7) {
    char AM9NS2WfVyrZ [(89 - 78)], gDNvmiZFsOjh [(41 - 30)];
    struct   ill *CC4ra3lZF, *jZd1TKn2A, *ASiPa2, *gqB6GcHY5eQX;
    int fiBLElb, fyrtUM;
    for (CC4ra3lZF = F89de0Mk7; CC4ra3lZF != NULL; CC4ra3lZF = CC4ra3lZF->fze4IiYZv58) {
        if (CC4ra3lZF->mhXdto >= (309 - 249)) {
            {
                ASiPa2 = CC4ra3lZF;
                jZd1TKn2A = CC4ra3lZF->fze4IiYZv58;
                for (; jZd1TKn2A != NULL;) {
                    if (ASiPa2->mhXdto < jZd1TKn2A->mhXdto && ASiPa2->mhXdto >= (267 - 207))
                        ASiPa2 = jZd1TKn2A;
                    jZd1TKn2A = jZd1TKn2A->fze4IiYZv58;
                }
            }
            {
                fiBLElb = fyrtUM = CC4ra3lZF->mhXdto;
                strcpy (AM9NS2WfVyrZ, CC4ra3lZF->eabW4JiGLw);
                strcpy (gDNvmiZFsOjh, CC4ra3lZF->eabW4JiGLw);
                for (gqB6GcHY5eQX = CC4ra3lZF->fze4IiYZv58; gqB6GcHY5eQX != ASiPa2->fze4IiYZv58; gqB6GcHY5eQX = gqB6GcHY5eQX->fze4IiYZv58) {
                    fyrtUM = gqB6GcHY5eQX->mhXdto;
                    strcpy (gDNvmiZFsOjh, gqB6GcHY5eQX->eabW4JiGLw);
                    gqB6GcHY5eQX->mhXdto = fiBLElb;
                    strcpy (gqB6GcHY5eQX->eabW4JiGLw, AM9NS2WfVyrZ);
                    fiBLElb = fyrtUM;
                    strcpy (AM9NS2WfVyrZ, gDNvmiZFsOjh);
                }
                CC4ra3lZF->mhXdto = fiBLElb;
                strcpy (CC4ra3lZF->eabW4JiGLw, AM9NS2WfVyrZ);
            }
        }
    }
    return (F89de0Mk7);
}

void  main () {
    int m1zLdmq9;
    struct   ill *F89de0Mk7, *gqB6GcHY5eQX;
    scanf ("%d", &m1zLdmq9);
    F89de0Mk7 = sYN3A1 (m1zLdmq9);
    F89de0Mk7 = c8hYdobXSPZ (F89de0Mk7);
    for (gqB6GcHY5eQX = F89de0Mk7; gqB6GcHY5eQX != NULL; gqB6GcHY5eQX = gqB6GcHY5eQX->fze4IiYZv58)
        if (gqB6GcHY5eQX->mhXdto >= (281 - 221))
            printf ("%s\n", gqB6GcHY5eQX->eabW4JiGLw);
    for (gqB6GcHY5eQX = F89de0Mk7; gqB6GcHY5eQX != NULL; gqB6GcHY5eQX = gqB6GcHY5eQX->fze4IiYZv58)
        if (gqB6GcHY5eQX->mhXdto < (1019 - 959))
            printf ("%s\n", gqB6GcHY5eQX->eabW4JiGLw);
}

