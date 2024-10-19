# Evaluate using ground truth
                        gt = open(os.path.join(dataset_path, 'ground-truth', cwe.upper(), file.split(".")[0] + ".txt"), "r", encoding='utf-8').read()
                        
                        # 1) Compute rouge score
                        if "rouge" not in results[prompt][temp][cwe][file][ix]:
                            rouge_score = self.rouge(reason=results[prompt][temp][cwe][file][ix]["reason"], ground_truth=gt)
                            results[prompt][temp][cwe][file][ix]["rouge"] = rouge_score
                        print("Rouge done!!")
                        
                        # 2) Compute cosine similarity
                        if "cos_sim" not in results[prompt][temp][cwe][file][ix]:
                            gt_emb = None
                            with open(os.path.join(dataset_path, 'embeddings', cwe.upper(), file.split(".")[0]), "rb") as f:
                                gt_emb = pickle.load(f)
                            cos_sim = self.cos_similarity(reason=results[prompt][temp][cwe][file][ix]["reason"], ground_truth=gt_emb)
                            if cos_sim == None:
                                open(result_full_path, "w").write(json.dumps(results, indent=4, sort_keys=True))
                                return
                            results[prompt][temp][cwe][file][ix]["cos_sim"] = cos_sim
                        print("Cosine similarity done!!")
                        
                        # 3) Compute gpt evaluation
                        if "gpt_eval" not in results[prompt][temp][cwe][file][ix]:
                            gpt_eval = self.gpt_eval(reason=results[prompt][temp][cwe][file][ix]["reason"], ground_truth=gt)
                            if not gpt_eval:
                                open(result_full_path, "w").write(json.dumps(results, indent=4, sort_keys=True))
                                return
                            results[prompt][temp][cwe][file][ix]["gpt_eval"] = gpt_eval
                        print("GPT evaluation done!!")