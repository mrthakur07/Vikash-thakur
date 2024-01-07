class Minstack:
    def __init__(self):
        self.stack=[]
        self.minstack=[]
    def push(self,val):
        self.stack.append(val)
        val=min(val,self.minstack[-1] if self.minstack else val)
        self.minstack.append(val)
    def pop(self):
        self.stack.pop()
        self.minstack.pop()
    def getmin(self)->int:
        return self.minstack[-1]
    def top(self)->int:
        return self.stack[-1]
min_stack=Minstack()
min_stack.push(-1)
min_stack.push(-5)
min_stack.push(56)
min_stack.push(-2)
print("top element",min_stack.top())
print("minimum element",min_stack.getmin())
min_stack.pop()
print("after pop,minimum element",min_stack.getmin())  
            