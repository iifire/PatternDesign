观察者模式：

学生1: 观察老师有没有来，如果来了就通知其他人（同时为被通知对象）
学生2: 观察午饭有没有做好，如果做好了同样通知其他人（同时为被通知对象）
学生3: 普通学生（为被通知对象）

要点：
1.事件主题中包含学生队列，一旦主题状态发生变化，即可通知所有学生做相应操作
2.监听接口中会放置相应的事件主题作为成员，以改变主题状态
3.多重继承可将普通学生和有观察者（监听者）资格的功能分离