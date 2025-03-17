function [] = cots_solver_status(solve_flag)
%COTS_SOLVER_STATUS
%   [] = COTS_SOLVER_STATUS(SOLVE_FLAG)
%
% Print the solver status if the solver fails to find a feasible solution.

switch solve_flag
    case 0
        % 1: Feasible
    case {1, 12, 15}
        % 1:  Infeasible
        % 12: Infeasible or unbounded
        % 15: Either infeasible or unbounded
        error(' Problem infeasible.');
    case {3, 4, 5}
        % 3: Maximum number of iterations exceeded
        % 4: Numerical problems
        % 5: Lack of progress
        error(' Numerical issues.');
    otherwise
        display(solve_flag);
        error(' Unsupported exit flag.');
end

end