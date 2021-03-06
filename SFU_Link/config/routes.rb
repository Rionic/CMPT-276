Rails.application.routes.draw do
  # For details on the DSL available within this file, see http://guides.rubyonrails.org/routing.html
  root 'pages#home'
  get 'pages/about', to: 'pages#about'
  get 'pages/contact', to: 'pages#contact'
  get 'pages/profile', to: 'pages#profile'
  get 'pages/match', to: 'pages#match'


  get 'signup', to: 'users#new'
  resources :users, except: [:new]
  post 'signup', to: 'sessions#create'

  get 'login', to: 'sessions#new'
  post 'login', to: 'sessions#create'
  delete 'logout', to: 'sessions#destroy'


end
