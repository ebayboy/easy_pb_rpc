[基于protobuf service使用rpc入门教程](https://blog.csdn.net/NK_test/article/details/72682780)

#### 以下性质增加了开发的共识和通用性：
- rpc.proto的二次封装，导致客户端也要单独实现对rpc.proto的解析，
- 由于定义了service_id, method_id的映射， 客户端请求时的消息也需要遵循规则