26:13)',
  name: 'JWEDecryptionFailed'
}
 POST /api/user 401 in 15ms (compile: 3ms, render: 12ms)
 GET / 200 in 34ms (compile: 5ms, render: 29ms)
 GET /api/auth/session 200 in 119ms (compile: 98ms, render: 20ms)
[next-auth][error][JWT_SESSION_ERROR] 
https://next-auth.js.org/errors#jwt_session_error decryption operation failed {
  message: 'decryption operation failed',
  stack: 'JWEDecryptionFailed: decryption operation failed\n' +
    '    at gcmDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:734:15)\n' +
    '    at decrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:757:20)\n' +
    '    at flattenedDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:2254:52)\n' +
    '    at async compactDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:2308:23)\n' +
    '    at async jwtDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:3770:23)\n' +
    '    at async Object.decode (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:725:25)\n' +
    '    at async Object.session (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:2038:34)\n' +
    '    at async AuthHandler (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:3184:37)\n' +
    '    at async getServerSession (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:3576:21)\n' +
    '    at async GET (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/[root-of-the-server]__f691f801._.js:211:25)\n' +
    '    at async AppRouteRouteModule.do (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:5:37866)\n' +
    '    at async AppRouteRouteModule.handle (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:5:45156)\n' +
    '    at async responseGenerator (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16028:38)\n' +
    '    at async AppRouteRouteModule.handleResponse (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:1:187713)\n' +
    '    at async handleResponse (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16091:32)\n' +
    '    at async Module.handler (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16144:13)\n' +
    '    at async DevServer.renderToResponseWithComponentsImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1422:9)\n' +
    '    at async DevServer.renderPageComponent (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1474:24)\n' +
    '    at async DevServer.renderToResponseImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1524:32)\n' +
    '    at async DevServer.pipeImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1018:25)\n' +
    '    at async NextNodeServer.handleCatchallRenderRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/next-server.js:395:17)\n' +
    '    at async DevServer.handleRequestImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:909:17)\n' +
    '    at async /home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/dev/next-dev-server.js:387:20\n' +
    '    at async Span.traceAsyncFn (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/trace/trace.js:157:20)\n' +
    '    at async DevServer.handleRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/dev/next-dev-server.js:383:24)\n' +
    '    at async invokeRender (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:248:21)\n' +
    '    at async handleRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:447:24)\n' +
    '    at async requestHandlerImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:496:13)\n' +
    '    at async Server.requestListener (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/start-server.js:226:13)',
  name: 'JWEDecryptionFailed'
}
 GET /api/user 401 in 21ms (compile: 5ms, render: 16ms)
[next-auth][error][JWT_SESSION_ERROR] 
https://next-auth.js.org/errors#jwt_session_error decryption operation failed {
  message: 'decryption operation failed',
  stack: 'JWEDecryptionFailed: decryption operation failed\n' +
    '    at gcmDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:734:15)\n' +
    '    at decrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:757:20)\n' +
    '    at flattenedDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:2254:52)\n' +
    '    at async compactDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:2308:23)\n' +
    '    at async jwtDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:3770:23)\n' +
    '    at async Object.decode (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:725:25)\n' +
    '    at async Object.session (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:2038:34)\n' +
    '    at async AuthHandler (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:3184:37)\n' +
    '    at async getServerSession (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:3576:21)\n' +
    '    at async POST (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/[root-of-the-server]__f691f801._.js:247:25)\n' +
    '    at async AppRouteRouteModule.do (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:5:37866)\n' +
    '    at async AppRouteRouteModule.handle (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:5:45156)\n' +
    '    at async responseGenerator (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16028:38)\n' +
    '    at async AppRouteRouteModule.handleResponse (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:1:187713)\n' +
    '    at async handleResponse (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16091:32)\n' +
    '    at async Module.handler (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16144:13)\n' +
    '    at async DevServer.renderToResponseWithComponentsImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1422:9)\n' +
    '    at async DevServer.renderPageComponent (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1474:24)\n' +
    '    at async DevServer.renderToResponseImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1524:32)\n' +
    '    at async DevServer.pipeImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1018:25)\n' +
    '    at async NextNodeServer.handleCatchallRenderRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/next-server.js:395:17)\n' +
    '    at async DevServer.handleRequestImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:909:17)\n' +
    '    at async /home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/dev/next-dev-server.js:387:20\n' +
    '    at async Span.traceAsyncFn (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/trace/trace.js:157:20)\n' +
    '    at async DevServer.handleRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/dev/next-dev-server.js:383:24)\n' +
    '    at async invokeRender (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:248:21)\n' +
    '    at async handleRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:447:24)\n' +
    '    at async requestHandlerImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:496:13)\n' +
    '    at async Server.requestListener (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/start-server.js:226:13)',
  name: 'JWEDecryptionFailed'
}
 POST /api/user 401 in 28ms (compile: 11ms, render: 18ms)
[next-auth][error][JWT_SESSION_ERROR] 
https://next-auth.js.org/errors#jwt_session_error decryption operation failed {
  message: 'decryption operation failed',
  stack: 'JWEDecryptionFailed: decryption operation failed\n' +
    '    at gcmDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:734:15)\n' +
    '    at decrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:757:20)\n' +
    '    at flattenedDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:2254:52)\n' +
    '    at async compactDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:2308:23)\n' +
    '    at async jwtDecrypt (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_jose_dist_node_cjs_bd88468e._.js:3770:23)\n' +
    '    at async Object.decode (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:725:25)\n' +
    '    at async Object.session (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:2038:34)\n' +
    '    at async AuthHandler (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:3184:37)\n' +
    '    at async getServerSession (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next-auth_f5fdffb5._.js:3576:21)\n' +
    '    at async POST (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/[root-of-the-server]__f691f801._.js:247:25)\n' +
    '    at async AppRouteRouteModule.do (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:5:37866)\n' +
    '    at async AppRouteRouteModule.handle (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:5:45156)\n' +
    '    at async responseGenerator (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16028:38)\n' +
    '    at async AppRouteRouteModule.handleResponse (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/compiled/next-server/app-route-turbo.runtime.dev.js:1:187713)\n' +
    '    at async handleResponse (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16091:32)\n' +
    '    at async Module.handler (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/.next/dev/server/chunks/node_modules_next_20aace89._.js:16144:13)\n' +
    '    at async DevServer.renderToResponseWithComponentsImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1422:9)\n' +
    '    at async DevServer.renderPageComponent (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1474:24)\n' +
    '    at async DevServer.renderToResponseImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1524:32)\n' +
    '    at async DevServer.pipeImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:1018:25)\n' +
    '    at async NextNodeServer.handleCatchallRenderRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/next-server.js:395:17)\n' +
    '    at async DevServer.handleRequestImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/base-server.js:909:17)\n' +
    '    at async /home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/dev/next-dev-server.js:387:20\n' +
    '    at async Span.traceAsyncFn (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/trace/trace.js:157:20)\n' +
    '    at async DevServer.handleRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/dev/next-dev-server.js:383:24)\n' +
    '    at async invokeRender (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:248:21)\n' +
    '    at async handleRequest (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:447:24)\n' +
    '    at async requestHandlerImpl (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/router-server.js:496:13)\n' +
    '    at async Server.requestListener (/home/sachin/Sachin/learning/programming/WEB_DEV/Projects/Hackthon_projects/Genesis_1.0_Dec-2025-Jan-2026/PriorityTask/node_modules/next/dist/server/lib/start-server.js:226:13)',
  name: 'JWEDecryptionFailed'
}
 POST /api/user 401 in 11ms (compile: 2ms, render: 8ms)
