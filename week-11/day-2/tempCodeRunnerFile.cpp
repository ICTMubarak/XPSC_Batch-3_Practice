for(int i=0;i<str2.length();i++){
                while(str2[i]==stk.top()){
                        stk.pop();
                }
            }
             if(stk.empty()) cout<<"YES"<<'\n';
              else cout<<"NO"<<'\n';