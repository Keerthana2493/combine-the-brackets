int len=strlen(s);
char stack[len];
int top=-1;
for(int i=0;i<len;i++
{
if(s[i]=='('||s[i]=='{'||s[i]=='['){
stack[++top]=s[i];
}
else
{
if(top==-1){
return false;
}
if((s[i]==')'&&stack[top]=='(')||(s[i]=='}'&&stack[top]=='{')||(s[i]==']'&&stack[top]=='[')
top--;
else
return false;
}}
return top==-1;
}